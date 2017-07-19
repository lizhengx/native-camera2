Hello Camera2
=============
Hello Camera2 is an Android Camera2 sample that takes a snapshot using libcamera2ndk.

It uses JNI to access camera2 APIs which recently becomes one of 
[public libraries](http://android-developers.blogspot.kr/2016/06/improving-stability-with-private-cc.html)
in Android N.

This fork is a POC that back ports the native camera2 API to Marshmallow and possibly to Lollipop devices.

It runs live camera preview on 6.0.1 Nexus 5 phone, but more experimental data is needed to understand whether
it is worth anything beyond a little excercsise in abusing Android system headers.

BTW, the backdoor was [slammed shut](https://developer.android.com/about/versions/nougat/android-7.0-changes.html#ndk) in Android N, and same techniques are not relevant anymore for modern platforms.

Pre-requisites
--------------
Android Studio 2.3 with [NDK](https://developer.android.com/ndk/) bundle. 
To avoid hassle with old system headers, this project was built with NDK **r.14b**.

Screenshots
-----------
![screenshot](screenshot.png)

Privacy Policy
==============
This app sends nothing, shares nothing, and will never do anything beyond being an experimental playground for Android Camera API.