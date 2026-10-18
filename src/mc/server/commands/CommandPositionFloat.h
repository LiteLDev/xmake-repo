#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandPosition.h"

#if defined(LL_PLAT_A) // @header-generator platform
class CommandPositionFloat : public ::CommandPosition {};
#else // @header-generator platform
class CommandPositionFloat : public ::CommandPosition {
public:
    using CommandPosition::CommandPosition;
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::CommandPositionFloat>();
// clang-format on
#endif // @header-generator platform
