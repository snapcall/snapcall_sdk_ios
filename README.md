# README #
# SnapCall - IOS framework #

Ios framework to easily perform call from IOs application.

# Getting Started #

Add it with Cocoapod :
	pod 'snapcall_framework', :git => 'https://snapcall@bitbucket.org/seampl/framework_snapcall_ios.git'
When asked write the password
Cocoapod will properly add the framework with all the link.
or
Download the framework and add it as a framework to your ios project, don't forget to set all the attribute and link in your target setting.


# External Library #
-The WebRTC library
-SwiftWebSocket: Library for  Websocket connection

# OS/Hardware requirements #
Work on IOS 10 system (iphone >= 5 and tablet)
Created with Xcode 8.

# Use #
Just add a classic UIButton to any storyboard and choose the snapcall_button class as custom class in the identity selector.
Then you can set a ButtonId, a logo and the RGB color of your button.
On click a call will start.

	User Defined Runtime Attributes
	Key Path	Type	Value
	Bid 		String	"xxxxxxxx"
	logocall	String	"Image_Name"
	R			Number  0-255
	G			Number	0-255
	B			Number	0-255


The Snapcall service, bind to the previous activity, get the BID's info in our server and link the media client and the Signaling client to allow communication.

-It add bar on the top of UI to retrieve call and allow user to keep watching your app. To get the touch add this to your App delegate :
	 
	 override func touchesBegan(_ touches: Set<UITouch>, with event: UIEvent?) {
        
        super.touchesBegan(touches, with: event)
        
        guard let touchPoint = event?.allTouches?.first?.location(in: self.window) else { print("ouch")
            return
        }
        
        if (touchPoint.y <= 40){
            NotificationCenter.default.post(Notification(name: Notification.Name(rawValue: "Retrievecallnotification")))
        } 
    }