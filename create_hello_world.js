/**
 * @return {Function}
 */
var createHelloWorld = function() {
    
    return function(...args) {
        const string= "Hello World";
        return string;
    }
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */