

Pod::Spec.new do |s|

  s.name         = 'PEPBigData'

  s.version      = '0.5.3'

  s.summary      = '人教大数据统计SDK'

  s.author       = { 'PEPBigData' => 'PEP' }

  s.platform     = :ios, '8.0'
  
  s.homepage     = 'https://github.com/PEPDigitalPublishing/PEPBigData'

  s.source       = { :git => 'https://github.com/PEPDigitalPublishing/PEPBigData.git', :tag => s.version }

  s.vendored_frameworks = 'PEPBigData.framework'
  
  s.static_framework = true

  s.frameworks   = 'Foundation', 'CoreTelephony', 'UIKit', 'CoreLocation'

  s.ios.library  = 'sqlite3'

  s.dependency 'Aspects'
  s.dependency 'FMDB'
  
    s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

end


















