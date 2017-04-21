Pod::Spec.new do |spec|
  spec.name         = 'snapcall_framework'
  spec.version      = '1.0.1'
  spec.license      = { :type => 'Custom' }
  spec.homepage     = 'https://web.snapcall.io/'
  spec.authors      = { 'Noyelle Pierre' => 'noyelle.pierre@gmail.com' }
  spec.summary      = 'Make snapcall call with ios'
  spec.source       = { :git => 'https://pnoyelle@bitbucket.org/seampl/framework_snapcall_ios.git', :tag => '1.0.1' }
  spec.module_name  = 'Rich'

  spec.ios.deployment_target  = '10.0'

  spec.vendored_frameworks = 'snapcall_framework.framework'

 
  spec.ios.framework  = 'UIKit'

  spec.ios.framework  = 'CallKit'
  spec.ios.framework  = 'UserNotifications'
  spec.ios.framework  = 'UserNotificationsUI'
  spec.ios.framework  = 'Foundation'
  spec.ios.framework  = 'AVFoundation'
  spec.ios.framework  = 'CallKit'
  spec.ios.framework  = 'NotificationCenter'
  spec.ios.framework  = 'SystemConfiguration'
 

spec.dependency 'WebRTC', '~>56.12.15101'
spec.dependency 'SwiftWebSocket'
end