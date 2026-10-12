1. To create new Project –> into terminal
    npm create vite 
    or
    pnpm create vite
// NOTE: we can use vite@latest instead of vite and pnpm is preferred because it takes less space

2. write project name - select react then javascript then eslint

3. now set up tailwind –> write this in terminal
    npm install tailwindcss @tailwindcss/vite
    or
    pnpm install tailwindcss @tailwindcss/vite

4. Add the following command into plugin to your Vite configuration –> (vite.config.js) to the top
    import tailwindcss from '@tailwindcss/vite'

5. Add tailwindcss() into plugin list after comma
    tailwindcss()

6. import into file -> index.css 
    @import "tailwindcss";

7. write this command in terminal
    npm add tailwindcss @tailwindcss/vite
    or
    pnpm add tailwindcss @tailwindcss/vite

8. then start hosting
    npm run dev
    or
    pnpm run dev