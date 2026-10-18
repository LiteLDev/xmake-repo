#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace qrcodegen { class QrCode; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock {

class QRCode {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 8> mQrCode;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk32ecba;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    QRCode& operator=(QRCode const&);
    QRCode(QRCode const&);
#endif // @header-generator platform
    QRCode();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit QRCode(std::string const&);

    MCNAPI bool getModule(int, int) const;

    MCNAPI int getSize() const;

    MCNAPI ~QRCode();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI explicit QRCode(::std::string const& targetString);

    MCNAPI ~QRCode();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::string const& targetString);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
