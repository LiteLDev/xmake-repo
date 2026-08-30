#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/profiler/StaticProfLabel.h"

namespace Core::Profile {

class CPUProfileTokenMarker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::string_view>                                           mLabel;
    ::ll::TypedStorage<8, 24, std::optional<Bedrock::Profiler::details::StaticProfLabel>> mStaticLabel;
    ::ll::TypedStorage<4, 4, uint>                                                        mColor;
    ::ll::TypedStorage<8, 24, std::vector<char>>                                          mLabelCache;
    ::ll::TypedStorage<8, 24, std::string>                                                mGroupAndLabel;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CPUProfileTokenMarker(char const*, ::Bedrock::Profiler::details::StaticProfLabel, uint);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[6]> CLONE_WARNING();

    MCNAPI static ::std::add_lvalue_reference_t<char const[6]> EMPTY_WARNING();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(char const*, ::Bedrock::Profiler::details::StaticProfLabel, uint);
    // NOLINTEND
};

} // namespace Core::Profile
