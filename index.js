//index.js
const napidemo = require('./build/Release/napidemo.node')

console.log('addon: ', napidemo)
console.log('call hello: ', napidemo.hello())
console.log('call add: ', napidemo.add(5.5, 14.5))
console.log('call helloWrapper: ', napidemo.helloWrapper())
console.log('call addWrapper: ', napidemo.addWrapper(5, 15))

napidemo.callback((msg) => console.log('call callback: ', msg))

var obj1 = napidemo.createObject('hello');
var obj2 = napidemo.createObject('world');
console.log('call createObj: ', obj1.msg + ' ' + obj2.msg);

var fn = napidemo.createFunction('world');
console.log('call createFunc: ', fn());

const prevInstance = new napidemo.ClassExample(4.3);
console.log('Initial value : ', prevInstance.getValue());
console.log('After adding 3.3 : ', prevInstance.add(3.3));

const newFromExisting = new napidemo.ClassExample(prevInstance);
console.log('Testing class initial value for derived instance');
console.log(newFromExisting.getValue());

module.exports = napidemo
