
import { useForm } from "react-hook-form";
import { zodResolver } from "@hookform/resolvers/zod";
import { z } from "zod";

const formSchema = z
  .object({
    name: z
      .string()
      .min(3, "Name must be at least 3 characters")
      .max(20, "Name cannot exceed 20 characters"),

    age: z.coerce
      .number()
      .min(10, "Age must be at least 10")
      .max(80, "Age cannot exceed 80"),

    password: z
      .string()
      .min(5, "Password must be at least 5 characters")
      .max(20, "Password cannot exceed 20 characters"),

    confirm: z.string(),

    email: z.email("Please enter a valid email address"),
  })
  .refine((data) => data.password === data.confirm, {
    message: "Passwords do not match",
    path: ["confirm"],
  });

function Zodform() {
  const {
    register,
    handleSubmit,
    formState: { errors, isSubmitting },
  } = useForm({
    resolver: zodResolver(formSchema),
    mode: "onTouched",
  });

  function submitForm(data) {
    console.log(data);
  }

  const inputStyle =
    "w-full rounded-lg border border-gray-300 bg-white px-4 py-3 text-gray-800 outline-none transition duration-200 placeholder:text-gray-400 focus:border-indigo-500 focus:ring-2 focus:ring-indigo-100";

  const errorStyle = "mt-1 text-sm text-red-500";

  return (
    <div className="flex min-h-screen items-center justify-center bg-gradient-to-br from-indigo-50 via-white to-purple-100 px-4 py-10">

      <div className="w-full max-w-md rounded-2xl bg-white p-8 shadow-xl shadow-indigo-100">

        {/* Header */}
        <div className="mb-8 text-center">
          <div className="mx-auto mb-4 flex h-14 w-14 items-center justify-center rounded-xl bg-indigo-600 text-2xl font-bold text-white">
            Z
          </div>

          <h1 className="text-3xl font-bold tracking-tight text-gray-800">
            Create Account
          </h1>

          <p className="mt-2 text-sm text-gray-500">
            Fill in your details to get started
          </p>
        </div>

        {/* Form */}
        <form onSubmit={handleSubmit(submitForm)} className="space-y-5">

          {/* Name */}
          <div>
            <label
              htmlFor="name"
              className="mb-2 block text-sm font-semibold text-gray-700"
            >
              Full Name
            </label>

            <input
              id="name"
              type="text"
              placeholder="Enter your name"
              autoComplete="name"
              {...register("name")}
              className={inputStyle}
            />

            {errors.name && (
              <p className={errorStyle}>{errors.name.message}</p>
            )}
          </div>

          {/* Email */}
          <div>
            <label
              htmlFor="email"
              className="mb-2 block text-sm font-semibold text-gray-700"
            >
              Email Address
            </label>

            <input
              id="email"
              type="email"
              placeholder="you@example.com"
              autoComplete="email"
              {...register("email")}
              className={inputStyle}
            />

            {errors.email && (
              <p className={errorStyle}>{errors.email.message}</p>
            )}
          </div>

          {/* Age */}
          <div>
            <label
              htmlFor="age"
              className="mb-2 block text-sm font-semibold text-gray-700"
            >
              Age
            </label>

            <input
              id="age"
              type="number"
              placeholder="Enter your age"
              {...register("age")}
              className={inputStyle}
            />

            {errors.age && (
              <p className={errorStyle}>{errors.age.message}</p>
            )}
          </div>

          {/* Password */}
          <div>
            <label
              htmlFor="password"
              className="mb-2 block text-sm font-semibold text-gray-700"
            >
              Password
            </label>

            <input
              id="password"
              type="password"
              placeholder="Create a password"
              autoComplete="new-password"
              {...register("password")}
              className={inputStyle}
            />

            {errors.password && (
              <p className={errorStyle}>{errors.password.message}</p>
            )}
          </div>

          {/* Confirm Password */}
          <div>
            <label
              htmlFor="confirm"
              className="mb-2 block text-sm font-semibold text-gray-700"
            >
              Confirm Password
            </label>

            <input
              id="confirm"
              type="password"
              placeholder="Confirm your password"
              autoComplete="new-password"
              {...register("confirm")}
              className={inputStyle}
            />

            {errors.confirm && (
              <p className={errorStyle}>{errors.confirm.message}</p>
            )}
          </div>

          {/* Submit */}
          <button
            type="submit"
            disabled={isSubmitting}
            className="w-full rounded-lg bg-indigo-600 py-3 font-semibold text-white shadow-md transition duration-200 hover:bg-indigo-700 hover:shadow-lg active:scale-[0.98] disabled:cursor-not-allowed disabled:opacity-50"
          >
            {isSubmitting ? "Submitting..." : "Create Account"}
          </button>

        </form>

        {/* Footer */}
        <p className="mt-6 text-center text-xs text-gray-400">
          Form validation powered by React Hook Form & Zod
        </p>

      </div>
    </div>
  );
}

export default Zodform;
