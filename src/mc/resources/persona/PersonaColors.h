#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace persona {

class PersonaColors {
public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<std::pair<mce::Color, std::string>> const& mHairColors();
#else // @header-generator platform
    MCNAPI static ::std::vector<::std::pair<::mce::Color, ::std::string>> const& mHairColors();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<std::pair<mce::Color, std::string>> const& mIrisColors();
#else // @header-generator platform
    MCNAPI static ::std::vector<::std::pair<::mce::Color, ::std::string>> const& mIrisColors();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<std::pair<mce::Color, std::string>> const& mMouthColors();
#else // @header-generator platform
    MCNAPI static ::std::vector<::std::pair<::mce::Color, ::std::string>> const& mMouthColors();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<std::pair<mce::Color, std::string>> const& mPremiumColors();
#else // @header-generator platform
    MCNAPI static ::std::vector<::std::pair<::mce::Color, ::std::string>> const& mPremiumColors();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<std::pair<mce::Color, std::string>> const& mScleraColors();
#else // @header-generator platform
    MCNAPI static ::std::vector<::std::pair<::mce::Color, ::std::string>> const& mScleraColors();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<std::pair<mce::Color, std::string>> const& mSkinColors();
#else // @header-generator platform
    MCNAPI static ::std::vector<::std::pair<::mce::Color, ::std::string>> const& mSkinColors();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace persona
