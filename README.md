# MultiPlatformKotlin-Feb20
 
 ### About this project:
 This project was written in February 2020 to match the new platforms (Xcode and Android Studio).
- Xcode 11.0 
- Android Studio 3.6
- Dependecies versions:
~~~
    ext.kotlin_version = '1.3.61'
    ext.ktorVer = '1.3.0'
    ext.coroutinesVer = '1.3.3'
    ext.kotlix_serialization = '0.14.0'
~~~

This project was planned to make android and iOS platforms to use the same business logic that was written once. 
As Kotlin-Multi-Platform is still experimental, the function to format numbers was written from scratch in the "common" directory instead of using the android or iOS native ways.

This project uses https://exchangeratesapi.io/ API to recieve exchange rates.

This Medium article was very helpfull trying to make the first Kotlin Multi Platform project:
- https://medium.com/dev-machina/multiplatform-programming-using-kotlin-native-a-mobile-developers-quest-part-2-c903fda4f23

__*Kotlin Multi platform - Jetbrains - main*__
>https://www.jetbrains.com/lp/mobilecrossplatform/

## Ktor
*releases:*
> https://github.com/ktorio/ktor/releases

## Serialization
*Kotlin cross-platform / multi-format reflectionless serialization:*
>https://github.com/Kotlin/kotlinx.serialization
### *Kotlinx Serialization Release Notes:*
>https://github.com/Kotlin/kotlinx.serialization/releases

## Xcode plugin for kotlin
- https://medium.com/hackernoon/kotlin-xcode-plugin-64f52ff8dc2a
- https://github.com/touchlab/xcode-kotlin/releases

## Known Issues
- Ktor version 1.2.4 works with Kotlin version 1.3.50 and with coroutines version 1.3.0 and gradle 5.4.1 - this works with Xcode 10.3 - for Xcode 11+ use the following versions:
~~~
    ext.kotlin_version = '1.3.61'
    ext.ktorVer = '1.3.0'
    ext.coroutinesVer = '1.3.3'
    ext.kotlix_serialization = '0.14.0'
~~~
- Changing versions results in `./gradlew` build failling.
- Upgrading kotlin version, ktor, and gradle versions requires Xcode 11
- The error: 
 > More than one file was found with OS independent path 'META-INF/ktor-http.kotlin_module'

   can be fixed by adding this code to app build.gradle:
~~~
packagingOptions {
        exclude 'META-INF/DEPENDENCIES'
        exclude("META-INF/*.kotlin_module")
}
~~~
### or: 
~~~
packagingOptions {
        exclude 'META-INF/DEPENDENCIES'
        exclude 'META-INF/LICENSE'
        exclude 'META-INF/LICENSE.txt'
        exclude 'META-INF/license.txt'
        exclude 'META-INF/NOTICE'
        exclude 'META-INF/NOTICE.txt'
        exclude 'META-INF/notice.txt'
        exclude 'META-INF/ASL2.0'
        exclude("META-INF/*.kotlin_module")
}
~~~

- Xcode script:
~~~
cd $SRCROOT/../../SharedModule/build/xcode-frameworks
./gradlew :SharedModule:packForXCode -PXCODE_CONFIGURATION=${CONFIGURATION}
~~~



