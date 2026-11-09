# React Project Setup Guide

This guide explains how to initialize a React project using Vite and configure Tailwind CSS for styling.

## 1. Create a New Vite Project

Open the terminal and execute:

```bash
npm create vite@latest
```

Or, using pnpm:

```bash
pnpm create vite
```

**Note:** Using `vite@latest` ensures that you install the latest available Vite version.

## 2. Configure the Project

Follow the prompts in the terminal:

- **Project name:** Enter your project name.
- **Framework:** Select React.
- **Variant:** Select JavaScript.
- **Linting:** Select ESLint if prompted.

Navigate to the project directory:

```bash
cd project-name
```

Install the project dependencies:

```bash
npm install
```

Or, using pnpm:

```bash
pnpm install
```

**Note:** pnpm is preferred for efficient disk space utilization because it uses a shared package store.

## 3. Install Tailwind CSS

Install Tailwind CSS along with its Vite plugin.

Using npm:

```bash
npm install tailwindcss @tailwindcss/vite
```

Using pnpm:

```bash
pnpm add tailwindcss @tailwindcss/vite
```

## 4. Configure Tailwind CSS in Vite

Open `vite.config.js` and import the Tailwind CSS plugin.

```javascript
import tailwindcss from '@tailwindcss/vite'
```

Add `tailwindcss()` to the plugins array.

**Example: `vite.config.js`**

```javascript
import { defineConfig } from 'vite'
import react from '@vitejs/plugin-react'
import tailwindcss from '@tailwindcss/vite'

export default defineConfig({
  plugins: [
    react(),
    tailwindcss(),
  ],
})
```

## 5. Import Tailwind CSS

Open the `src/index.css` file and add the following:

```css
@import "tailwindcss";
```

This imports Tailwind CSS and enables its utility classes throughout the project.

## 6. Import the CSS File

Ensure that `src/main.jsx` imports the CSS file.

```javascript
import './index.css'
```

Vite's default React template already includes this import.

## 7. Start the Development Server

Run the following command in the terminal:

Using npm:

```bash
npm run dev
```

Using pnpm:

```bash
pnpm dev
```

Open the local URL displayed in the terminal to view your React application.

---

### Technology Stack

- **React:** UI development
- **Vite:** Development server and build tool
- **Tailwind CSS:** Utility-first CSS framework
- **ESLint:** Code linting
- **pnpm:** Package management
