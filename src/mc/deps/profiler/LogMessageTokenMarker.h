#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/profiler/StaticProfLabel.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Core::Profile {

class LogMessageTokenMarker {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::optional<Bedrock::Profiler::details::StaticProfLabel>> mStaticLabel;
    ::ll::TypedStorage<4, 4, uint>                                                        mColor;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk3ed3e1;
    ::ll::UntypedStorage<4, 4>  mUnk471bbf;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    LogMessageTokenMarker& operator=(LogMessageTokenMarker const&);
    LogMessageTokenMarker(LogMessageTokenMarker const&);
    LogMessageTokenMarker();
#endif // @header-generator platform
};

} // namespace Core::Profile
