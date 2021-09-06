function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "px4demo_PWM"};
	this.sidHashMap["px4demo_PWM"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "px4demo_PWM:6"};
	this.sidHashMap["px4demo_PWM:6"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "px4demo_PWM:6:3"};
	this.sidHashMap["px4demo_PWM:6:3"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<Root>/ARM PWM"] = {sid: "px4demo_PWM:2"};
	this.sidHashMap["px4demo_PWM:2"] = {rtwname: "<Root>/ARM PWM"};
	this.rtwnameHashMap["<Root>/AUX PWM Ch 1,2,3,4 value"] = {sid: "px4demo_PWM:25"};
	this.sidHashMap["px4demo_PWM:25"] = {rtwname: "<Root>/AUX PWM Ch 1,2,3,4 value"};
	this.rtwnameHashMap["<Root>/Bus Selector"] = {sid: "px4demo_PWM:8"};
	this.sidHashMap["px4demo_PWM:8"] = {rtwname: "<Root>/Bus Selector"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "px4demo_PWM:10"};
	this.sidHashMap["px4demo_PWM:10"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<Root>/MAIN PWM Ch 1,2 value"] = {sid: "px4demo_PWM:4"};
	this.sidHashMap["px4demo_PWM:4"] = {rtwname: "<Root>/MAIN PWM Ch 1,2 value"};
	this.rtwnameHashMap["<Root>/PX4 PWM Output"] = {sid: "px4demo_PWM:13"};
	this.sidHashMap["px4demo_PWM:13"] = {rtwname: "<Root>/PX4 PWM Output"};
	this.rtwnameHashMap["<Root>/PX4 PWM Output1"] = {sid: "px4demo_PWM:26"};
	this.sidHashMap["px4demo_PWM:26"] = {rtwname: "<Root>/PX4 PWM Output1"};
	this.rtwnameHashMap["<Root>/PX4 uORB Read"] = {sid: "px4demo_PWM:6"};
	this.sidHashMap["px4demo_PWM:6"] = {rtwname: "<Root>/PX4 uORB Read"};
	this.rtwnameHashMap["<Root>/Selector"] = {sid: "px4demo_PWM:9"};
	this.sidHashMap["px4demo_PWM:9"] = {rtwname: "<Root>/Selector"};
	this.rtwnameHashMap["<Root>/Signal Conversion"] = {sid: "px4demo_PWM:29"};
	this.sidHashMap["px4demo_PWM:29"] = {rtwname: "<Root>/Signal Conversion"};
	this.rtwnameHashMap["<Root>/Terminator"] = {sid: "px4demo_PWM:7"};
	this.sidHashMap["px4demo_PWM:7"] = {rtwname: "<Root>/Terminator"};
	this.rtwnameHashMap["<Root>/failsafe"] = {sid: "px4demo_PWM:3"};
	this.sidHashMap["px4demo_PWM:3"] = {rtwname: "<Root>/failsafe"};
	this.rtwnameHashMap["<Root>/failsafe1"] = {sid: "px4demo_PWM:27"};
	this.sidHashMap["px4demo_PWM:27"] = {rtwname: "<Root>/failsafe1"};
	this.rtwnameHashMap["<S1>/Constant"] = {sid: "px4demo_PWM:6:2"};
	this.sidHashMap["px4demo_PWM:6:2"] = {rtwname: "<S1>/Constant"};
	this.rtwnameHashMap["<S1>/Enabled Subsystem"] = {sid: "px4demo_PWM:6:3"};
	this.sidHashMap["px4demo_PWM:6:3"] = {rtwname: "<S1>/Enabled Subsystem"};
	this.rtwnameHashMap["<S1>/NOT"] = {sid: "px4demo_PWM:6:19"};
	this.sidHashMap["px4demo_PWM:6:19"] = {rtwname: "<S1>/NOT"};
	this.rtwnameHashMap["<S1>/SourceBlock"] = {sid: "px4demo_PWM:6:9"};
	this.sidHashMap["px4demo_PWM:6:9"] = {rtwname: "<S1>/SourceBlock"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "px4demo_PWM:6:10"};
	this.sidHashMap["px4demo_PWM:6:10"] = {rtwname: "<S1>/Out1"};
	this.rtwnameHashMap["<S1>/Out2"] = {sid: "px4demo_PWM:6:11"};
	this.sidHashMap["px4demo_PWM:6:11"] = {rtwname: "<S1>/Out2"};
	this.rtwnameHashMap["<S2>/In1"] = {sid: "px4demo_PWM:6:4"};
	this.sidHashMap["px4demo_PWM:6:4"] = {rtwname: "<S2>/In1"};
	this.rtwnameHashMap["<S2>/Enable"] = {sid: "px4demo_PWM:6:5"};
	this.sidHashMap["px4demo_PWM:6:5"] = {rtwname: "<S2>/Enable"};
	this.rtwnameHashMap["<S2>/Out1"] = {sid: "px4demo_PWM:6:6"};
	this.sidHashMap["px4demo_PWM:6:6"] = {rtwname: "<S2>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();