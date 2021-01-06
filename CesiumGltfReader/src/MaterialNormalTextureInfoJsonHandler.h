// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "DoubleJsonHandler.h"
#include "ExtensibleObjectJsonHandler.h"

namespace CesiumGltf {
  struct MaterialNormalTextureInfo;

  class MaterialNormalTextureInfoJsonHandler final : public ExtensibleObjectJsonHandler {
  public:
    void reset(JsonHandler* pHandler, MaterialNormalTextureInfo* pObject);
    virtual JsonHandler* Key(const char* str, size_t length, bool copy) override;

  private:

    MaterialNormalTextureInfo* _pObject;
    DoubleJsonHandler _scale;
  };
}