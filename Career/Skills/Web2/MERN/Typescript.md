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

When every type in a Union has a common property with literal types, TypeScript considers it to be a Discriminated Union, and can infer the type based on the values of this property. 

The `never` data type is assignable to every type but no type is assignable to the `never` data type. 
# Functions
In JavaScript, it is important to note that everything is an Object. By this property, a function can have properties as well as be callable. Keeping this in mind, a function can also be called as a Constructor. If we want to set it capable of creating an object, then it should be part of its prototype property.

In TypeScript, the easiest way to describe a function is through a function expression. 
## Managing The Properties Along With The Call Signature
```js fold title:Call_Signature_Description_With_Properties.ts
type GreetingFunction = {
	description: string;
	(a: string): void;
}
```

```js fold title:Call_Signature_With_Constructor_Description.ts
type GreetingFunction = {
	description: string;
	(a: string): void;
	new (a: string): SomeObject;
}
```

