// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#include "BufferJsonHandler.h"
#include "CesiumGltf/Buffer.h"
#include <cassert>
#include <string>

using namespace CesiumGltf;

void BufferJsonHandler::reset(JsonHandler* pParent, Buffer* pObject) {
  NamedObjectJsonHandler::reset(pParent);
  this->_pObject = pObject;
}

JsonHandler* BufferJsonHandler::Key(const char* str, size_t /*length*/, bool /*copy*/) {
  using namespace std::string_literals;

  assert(this->_pObject);

  if ("uri"s == str) return property(this->_uri, this->_pObject->uri);
  if ("byteLength"s == str) return property(this->_byteLength, this->_pObject->byteLength);

  return this->NamedObjectKey(str, *this->_pObject);
}