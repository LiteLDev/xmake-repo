#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace qrcodegen { class QrCode; }
// clang-format on

namespace Bedrock {

class QRCode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mQrCode;
    // NOLINTEND

public:
    // prevent constructor by default
    QRCode();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit QRCode(std::string const&);

    MCNAPI bool getModule(int, int) const;

    MCNAPI int getSize() const;

    MCNAPI ~QRCode();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock
