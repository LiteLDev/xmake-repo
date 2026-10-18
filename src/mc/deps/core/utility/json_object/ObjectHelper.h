#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_object/ObjectHelperBase.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class Node; }
// clang-format on

#endif // @header-generator platform
namespace Bedrock::JSONObject {

#if defined(LL_PLAT_A) // @header-generator platform
class ObjectHelper : public ::Bedrock::JSONObject::ObjectHelperBase<true> {};
#else // @header-generator platform
class ObjectHelper : public ::Bedrock::JSONObject::ObjectHelperBase<1> {};
#endif // @header-generator platform

} // namespace Bedrock::JSONObject
