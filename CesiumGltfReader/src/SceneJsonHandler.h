// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "ArrayJsonHandler.h"
#include "IntegerJsonHandler.h"
#include "NamedObjectJsonHandler.h"

namespace CesiumGltf {
  struct Scene;

  class SceneJsonHandler final : public NamedObjectJsonHandler {
  public:
    void reset(JsonHandler* pHandler, Scene* pObject);
    virtual JsonHandler* Key(const char* str, size_t length, bool copy) override;

  private:

    Scene* _pObject;
    ArrayJsonHandler<int32_t, IntegerJsonHandler<int32_t>> _nodes;
  };
}