
/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GenerateEventEmitterCpp.js
 */

#include <react/renderer/components/RNGoogleSignInCGen/EventEmitters.h>


namespace facebook::react {

void RNGoogleSigninButtonEventEmitter::onPress(OnPress event) const {
  dispatchEvent("press", [](jsi::Runtime &runtime) {
    auto payload = jsi::Object(runtime);
    
    return payload;
  });
}

} // namespace facebook::react
