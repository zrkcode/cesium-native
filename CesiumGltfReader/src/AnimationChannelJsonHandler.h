// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "AnimationChannelTargetJsonHandler.h"
#include "ExtensibleObjectJsonHandler.h"
#include "IntegerJsonHandler.h"

namespace CesiumGltf {
  struct AnimationChannel;

  class AnimationChannelJsonHandler final : public ExtensibleObjectJsonHandler {
  public:
    void reset(JsonHandler* pHandler, AnimationChannel* pObject);
    virtual JsonHandler* Key(const char* str, size_t length, bool copy) override;

  private:

    AnimationChannel* _pObject;
    IntegerJsonHandler<int32_t> _sampler;
    AnimationChannelTargetJsonHandler _target;
  };
}