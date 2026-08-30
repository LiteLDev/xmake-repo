#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/file_system/FileAccessTransforms.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
// clang-format on

class EncryptedZipTransforms : public ::FileAccessTransforms {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mKeyProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    EncryptedZipTransforms();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EncryptedZipTransforms();

    virtual bool readTransform(std::vector<uchar>&) const;

    virtual bool writeTransform(std::vector<uchar>&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EncryptedZipTransforms(::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $readTransform(std::vector<uchar>&) const;

    MCNAPI bool $writeTransform(std::vector<uchar>&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
