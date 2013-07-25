Pod::Spec.new do |s|
  s.name         = 'Marquette'
  s.version      = '0.0.1'
  s.license      =  :type => 'BSD' 
  s.homepage     = 'https://github.com/njh/marquette'
  s.authors      =  'Nicholas Humfrey' => 'njh@aelius.com' 
  s.summary      = 'Objective-C wrapper for libMosquitto, an MQTT client'
  s.source       =  :git => 'https://github.com/MaxGabriel/marquette.git', :tag => '0.0.1' 
  s.source_files = 'Classes/Mosquitto*.{h,m}', 'libmosquitto/*.{c,m}'
end