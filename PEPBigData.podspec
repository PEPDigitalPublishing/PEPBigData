

Pod::Spec.new do |s|

  s.name         = 'PEPBigData'

<<<<<<< HEAD
  s.version      = '0.3.0'
=======
  s.version      = '0.2.4'
>>>>>>> b77c74af271787c378edb12d164fc38a02c28fc4

  s.summary      = '人教大数据统计SDK'

  s.author       = { 'PEPBigData' => 'PEP' }

  s.platform     = :ios, '8.0'

  s.homepage     = 'https://github.com/PEPDigitalPublishing/PEPBigData'

  s.source       = { :git => 'https://github.com/PEPDigitalPublishing/PEPBigData.git', :tag => s.version }

  s.vendored_frameworks = 'PEPBigData.framework'

  s.frameworks   = 'Foundation', 'CoreTelephony', 'UIKit', 'CoreLocation'

  s.ios.library  = 'sqlite3'

  s.dependency 'Aspects'

end


















