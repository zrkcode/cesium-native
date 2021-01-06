// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#include "CameraOrthographicJsonHandler.h"
#include "CesiumGltf/CameraOrthographic.h"
#include <cassert>
#include <string>

using namespace CesiumGltf;

void CameraOrthographicJsonHandler::reset(JsonHandler* pParent, CameraOrthographic* pObject) {
  ExtensibleObjectJsonHandler::reset(pParent);
  this->_pObject = pObject;
}

JsonHandler* CameraOrthographicJsonHandler::Key(const char* str, size_t /*length*/, bool /*copy*/) {
  using namespace std::string_literals;

  assert(this->_pObject);

  if ("xmag"s == str) return property(this->_xmag, this->_pObject->xmag);
  if ("ymag"s == str) return property(this->_ymag, this->_pObject->ymag);
  if ("zfar"s == str) return property(this->_zfar, this->_pObject->zfar);
  if ("znear"s == str) return property(this->_znear, this->_pObject->znear);

  return this->ExtensibleObjectKey(str, *this->_pObject);
}