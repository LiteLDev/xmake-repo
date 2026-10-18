#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/profiler/StaticProfLabel.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Bedrock::Profiler::details { struct StaticProfLabel; }
// clang-format on
#endif // @header-generator platform

namespace Core::Profile {

class CPUProfileTokenMarker {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::string_view>                                           mLabel;
    ::ll::TypedStorage<8, 24, std::optional<Bedrock::Profiler::details::StaticProfLabel>> mStaticLabel;
    ::ll::TypedStorage<4, 4, uint>                                                        mColor;
    ::ll::TypedStorage<8, 24, std::vector<char>>                                          mLabelCache;
    ::ll::TypedStorage<8, 24, std::string>                                                mGroupAndLabel;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk52a7e8;
    ::ll::UntypedStorage<8, 24> mUnk246fc2;
    ::ll::UntypedStorage<4, 4>  mUnk646fb4;
    ::ll::UntypedStorage<8, 24> mUnkb7e32e;
    ::ll::UntypedStorage<8, 32> mUnkdf6bf6;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CPUProfileTokenMarker& operator=(CPUProfileTokenMarker const&);
    CPUProfileTokenMarker(CPUProfileTokenMarker const&);
    CPUProfileTokenMarker();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CPUProfileTokenMarker(char const*, ::Bedrock::Profiler::details::StaticProfLabel, uint);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI CPUProfileTokenMarker(char const* group, ::Bedrock::Profiler::details::StaticProfLabel label, uint color);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[6]> CLONE_WARNING();

    MCNAPI static ::std::add_lvalue_reference_t<char const[6]> EMPTY_WARNING();
#else // @header-generator platform
    MCNAPI ::Core::Profile::CPUProfileTokenMarker& operator=(::Core::Profile::CPUProfileTokenMarker&& rhs);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(char const*, ::Bedrock::Profiler::details::StaticProfLabel, uint);
#else // @header-generator platform
    MCNAPI void* $ctor(char const* group, ::Bedrock::Profiler::details::StaticProfLabel label, uint color);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core::Profile
