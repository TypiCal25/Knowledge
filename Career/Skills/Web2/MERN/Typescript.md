JavaScript has three very commonly used primitive types
1. ```string```
2. `number`
3. `boolean`

The whole list of primitive types in JavaScript are:
1. `string`
2. `number`
3. `boolean`
4. `bigint`
5. `symbol`

In TypeScript, there are also the types `String, Boolean, Number` which are also perfectly legal types but these are different from `string, boolean, number`. It is always better to make use of the first ones as these are the default ones that are made use of in most use-cases. 

Typescript has a lot of **contextual type-inference**. 
# Union Types
A union type is a type formed from two or more other types, representing values that may by any one of those types. Its sort of like the **OR** operator.
# Type Guards
Using the `typeof` operator in JavaScript, we can implement type guards in TypeScript. This is of great importance and makes code bases so much more secure.

The `typeof` operator returns a list of 
1. `string`
2. `number`
3. `boolean`
4. `bigint`
5. `symbol`
6. `undefined`
7. `object`
8. `function`

Type guards help TypeScript "Narrow" down the types.
## User Defined Type Guards
In order to define a User-Defined type guard, we would need to define a function whose return type is a **type predicate**. 