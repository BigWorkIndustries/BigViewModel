#
# Be sure to run `pod lib lint BigViewModel.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = "BigViewModel"
  s.version          = "1.0.0"
  s.summary          = "A collection of Objective-C macros that provide convenience methods for observing model objects on views."

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!  
  s.description      = <<-DESC
  					   A BIG collection of Objective-C macros that provide convenience methods for observing model objects on views
                       DESC

  s.homepage         = "https://github.com/bigworkindustries/BigViewModel"
  # s.screenshots     = "www.example.com/screenshots_1", "www.example.com/screenshots_2"
  s.license          = 'MIT'
  s.author           = { "Vincil Bishop" => "vincil.bishop@vbishop.com" }
  s.source           = { :git => "https://github.com/bigworkindustries/BigViewModel.git", :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.platform     = :ios, '7.0'
  s.requires_arc = true

  s.source_files = 'Pod/Classes/**/*.{h,m}'
  #s.resource_bundles = {
  #  'BigViewModel' => ['Pod/Assets/*.png']
  #}

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3' 
end
