Pod::Spec.new do |spec|
  spec.name         = 'Snapcall_Framework'
  spec.version      = '5.8.3'
  spec.license      = { :type => 'Custom' }
  spec.homepage     = 'https://web.snapcall.io/'
  spec.authors      = { 'Noyelle Pierre' => 'noyelle.pierre@gmail.com' }
  spec.summary      = 'Make snapcall call with ios'
  spec.source       = { :git => 'https://github.com/snapcall/snapcall_sdk_ios.git', :tag => '5.8.3' }


  spec.ios.deployment_target  = '10.0'
  spec.vendored_frameworks = 'Snapcall_Framework.xcframework'

 
  spec.ios.framework  = 'UIKit'
  spec.ios.framework  = 'CallKit'
  spec.ios.framework  = 'UserNotifications'
  spec.ios.framework  = 'UserNotificationsUI'
  spec.ios.framework  = 'Foundation'
  spec.ios.framework  = 'AVFoundation'
  spec.ios.framework  = 'NotificationCenter'
  spec.ios.framework  = 'SystemConfiguration'
  spec.ios.framework  = 'CoreTelephony'
  spec.library = 'z' 

  spec.dependency 'WebRTC_IOS' , '1.6.0-bitcode'
end
