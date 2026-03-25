🚀 Core TypeScript Commands

🧩 1. Initialize TypeScript project (only once per project)
tsc --init
👉 Creates tsconfig.json (very important file)


⚙️ 2. Compile whole project
tsc
👉 Compiles all .ts files using tsconfig.json


📄 3. Compile specific file
tsc index.ts
👉 Ignores tsconfig.json, uses default settings


👀 4. Watch mode (auto compile)
tsc -w
👉 Automatically recompiles on file changes
🔥 Very useful in development

To exit control+c (on mac)


📁 5. Compile using specific config
tsc -p ./path/to/tsconfig.json
👉 Useful in large projects / monorepos


🏗️ 6. Build project (advanced)
tsc -b
👉 Used for multiple projects / project references


🚫 7. Type-check only (no JS output)
tsc --noEmit
👉 Used in CI / checking errors only


🎯 8. Target JavaScript version
tsc --target es2020
👉 Changes output JS version