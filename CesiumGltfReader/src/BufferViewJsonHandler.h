// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "CesiumGltf/BufferView.h"
#include "IntegerJsonHandler.h"
#include "NamedObjectJsonHandler.h"

namespace CesiumGltf {
  struct BufferView;

  class BufferViewJsonHandler final : public NamedObjectJsonHandler {
  public:
    void reset(JsonHandler* pHandler, BufferView* pObject);
    virtual JsonHandler* Key(const char* str, size_t length, bool copy) override;

  private:

    BufferView* _pObject;
    IntegerJsonHandler<int32_t> _buffer;
    IntegerJsonHandler<int64_t> _byteOffset;
    IntegerJsonHandler<int64_t> _byteLength;
    IntegerJsonHandler<int64_t> _byteStride;
    IntegerJsonHandler<BufferView::Target> _target;
  };
}