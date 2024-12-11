React apps are basically made out of components. But what are components? Components are basically just pieces of the user-interface of a web application. All React components must start with a capital letter.
# How To Think In Terms of React
This is very important to do. 
1. Break the user interface into component heirarchy
2. Find the minimal but complete representation of the UI state
3. Identify where the state should live.

React uses one-way data flow. 
# React Components
React components are simply just JavaScript functions that are sprinkled with HTML and CSS. In this case, you can define how many ever components you want in the same JSX file.

It is very important to keep react components pure. What does this mean? It means that for the same input, the component generated should be the exact same. 

You should expect that react components can be rendered in any order. 
# State
There are two main features of React State:
- The value is persisted in between renders
- Any change to the state triggers a re-render of the component.
- State is completely isolated to each component.
# Rendering Process in React
The rendering process in React contains 3 main steps
1. Triggering of a render
2. Rendering
3. Committing
