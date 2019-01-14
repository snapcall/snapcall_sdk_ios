Pod::Spec.new do |spec|
  spec.name         = 'Snapcall_Framework'
  spec.version      = 'develop'
  spec.license      = { :type => 'Custom' }
  spec.homepage     = 'https://web.snapcall.io/'
  spec.authors      = { 'Noyelle Pierre' => 'noyelle.pierre@gmail.com' }
  spec.summary      = 'Make snapcall call with ios'
  spec.source       = { :git => 'https://github.com/snapcall/iOS_framework_release.git', :branch => 'develop' }

spec.ios.deployment_target  = '8.0'
spec.vendored_frameworks = 'Snapcall_Framework.framework'

 
  spec.ios.framework  = 'UIKit'

  spec.ios.framework  = 'CallKit'
  spec.ios.framework  = 'UserNotifications'
  spec.ios.framework  = 'UserNotificationsUI'
  spec.ios.framework  = 'Foundation'
  spec.ios.framework  = 'AVFoundation'
  spec.ios.framework  = 'CallKit'
  spec.ios.framework  = 'NotificationCenter'
  spec.ios.framework  = 'SystemConfiguration'
  spec.library = 'z' 

spec.dependency 'WebRTC' , '61.5.19063'
end
