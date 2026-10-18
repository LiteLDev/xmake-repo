#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ContextArea.h"
#include "mc/deps/cereal/schema/DescriptionExtra.h"
#include "mc/deps/cereal/schema/SerializationTraits.h"

namespace cereal {

struct DescriptionConfig {
public:
    // DescriptionConfig inner types define
    using Extra = ::cereal::internal::DescriptionExtra;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::cereal::ContextArea>                mContextArea;
    ::ll::TypedStorage<1, 1, ::cereal::SerializationTraits>        mSerializationTraits;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::optional<uint>>                  mScope;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>                mScope;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, ::cereal::internal::DescriptionExtra> mExtraInfo;
    ::ll::TypedStorage<1, 1, bool>                                 mIgnoreDeprecatedMembers;
    ::ll::TypedStorage<1, 1, bool>                                 mIsTopLevel;
    // NOLINTEND
};

} // namespace cereal
