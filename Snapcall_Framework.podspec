Pod::Spec.new do |spec|
  spec.name         = 'Snapcall_Framework'
  spec.version      = '5.0.0'
  spec.license      = { :type => 'Custom' }
  spec.homepage     = 'https://web.snapcall.io/'
  spec.authors      = { 'Noyelle Pierre' => 'noyelle.pierre@gmail.com' }
  spec.summary      = 'Make snapcall call with ios'
  spec.source       = { :git => 'https://snapcall@bitbucket.org/seampl/framework_snapcall_ios.git', :branch => 'sandbox' }

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
 

spec.dependency 'GoogleWebRTC'
spec.dependency 'SwiftWebSocket'
end
