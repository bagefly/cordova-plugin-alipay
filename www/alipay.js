var exec = require('cordova/exec');

exports.pay = function(payInfo, success, error) {
    exec(success, error, "alipay", "pay", [payInfo]);
};
