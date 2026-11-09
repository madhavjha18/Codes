# Initializing React Hook Form with Zod

This guide explains how to set up **React Hook Form**, **Zod**, and **Zod Resolver** in a React application created using Vite.

## 1. Create a Vite Project

First, initialize a new React project using Vite:

```bash
npm create vite@latest my-app
```

Navigate to the project directory and install the dependencies:

```bash
cd my-app
npm install
```

## 2. Install React Hook Form

React Hook Form is used to manage form state, handle form submissions, and simplify form validation.

```bash
npm install react-hook-form
```

Or, using pnpm:

```bash
pnpm add react-hook-form
```

**Import in your component:**

```jsx
import { useForm } from "react-hook-form";
```

## 3. Install Zod

Zod is a TypeScript-first schema validation library used to define and validate form data.

```bash
npm install zod
```

Or, using pnpm:

```bash
pnpm add zod
```

**Import in your component:**

```jsx
import { z } from "zod";
```

## 4. Install Zod Resolver

The Zod Resolver connects Zod's schema validation with React Hook Form, allowing forms to be validated using Zod schemas.

```bash
npm install @hookform/resolvers
```

Or, using pnpm:

```bash
pnpm add @hookform/resolvers
```

**Import in your component:**

```jsx
import { zodResolver } from "@hookform/resolvers/zod";
```

## 5. Setup Complete

All the required dependencies are now installed.

You can use the following imports to initialize your form:

```jsx
import { useForm } from "react-hook-form";
import { z } from "zod";
import { zodResolver } from "@hookform/resolvers/zod";
```

Now, define your Zod validation schema, configure `useForm()` with `zodResolver`, implement your form logic, and run the application.

```bash
npm run dev
```

**Happy Coding! 🚀**
