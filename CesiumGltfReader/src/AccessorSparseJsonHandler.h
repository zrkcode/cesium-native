// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "AccessorSparseIndicesJsonHandler.h"
#include "AccessorSparseValuesJsonHandler.h"
#include "ExtensibleObjectJsonHandler.h"
#include "IntegerJsonHandler.h"

namespace CesiumGltf {
  struct AccessorSparse;

  class AccessorSparseJsonHandler final : public ExtensibleObjectJsonHandler {
  public:
    void reset(JsonHandler* pHandler, AccessorSparse* pObject);
    virtual JsonHandler* Key(const char* str, size_t length, bool copy) override;

  private:

    AccessorSparse* _pObject;
    IntegerJsonHandler<int64_t> _count;
    AccessorSparseIndicesJsonHandler _indices;
    AccessorSparseValuesJsonHandler _values;
  };
}