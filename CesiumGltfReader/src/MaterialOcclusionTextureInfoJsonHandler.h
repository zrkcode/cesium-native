// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "DoubleJsonHandler.h"
#include "ExtensibleObjectJsonHandler.h"

namespace CesiumGltf {
  struct MaterialOcclusionTextureInfo;

  class MaterialOcclusionTextureInfoJsonHandler final : public ExtensibleObjectJsonHandler {
  public:
    void reset(JsonHandler* pHandler, MaterialOcclusionTextureInfo* pObject);
    virtual JsonHandler* Key(const char* str, size_t length, bool copy) override;

  private:

    MaterialOcclusionTextureInfo* _pObject;
    DoubleJsonHandler _strength;
  };
}