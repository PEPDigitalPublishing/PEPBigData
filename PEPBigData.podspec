

Pod::Spec.new do |s|

  s.name         = 'PEPBigData'

  s.version      = '0.0.9'

  s.summary      = '人教大数据统计SDK'

  s.author       = { 'PEPBigData' => 'PEP' }

  s.platform     = :ios, '7.0'

  s.homepage     = 'https://github.com/PEPDigitalPublishing/PEPBigData'

  s.source       = { :git => 'https://github.com/PEPDigitalPublishing/PEPBigData.git', :tag => s.version }

  s.vendored_frameworks = 'PEPBigData.framework'

  s.frameworks   = 'Foundation', 'CoreTelephony', 'UIKit', 'CoreLocation'

  s.ios.library  = 'sqlite3'

  s.dependency 'Aspects'

end


















