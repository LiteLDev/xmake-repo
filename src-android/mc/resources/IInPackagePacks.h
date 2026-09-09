#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/PackCategory.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class IInPackagePacks {
public:
    // IInPackagePacks inner types declare
    // clang-format off
    struct MetaData;
    // clang-format on

    // IInPackagePacks inner types define
    struct MetaData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>                    mPath;
        ::ll::TypedStorage<1, 1, bool>                 mIsHidden;
        ::ll::TypedStorage<4, 4, ::PackCategory>       mPackCategory;
        ::ll::TypedStorage<4, 4, ::ResourceFileSystem> mFileSystem;
        // NOLINTEND

    public:
        // prevent constructor by default
        MetaData& operator=(MetaData const&);
        MetaData(MetaData const&);
        MetaData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI MetaData(::Core::Path const&, bool const, ::PackCategory);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Core::Path const&, bool const, ::PackCategory);
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IInPackagePacks();

    virtual std::vector<IInPackagePacks::MetaData> getPacks(::PackType) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
