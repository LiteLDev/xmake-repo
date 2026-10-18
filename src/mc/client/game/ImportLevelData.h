#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/resources/LoadImportedLevelData.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class ImportContext;
namespace Core { class Path; }
// clang-format on

struct ImportLevelData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                               mLevelPath;
    ::ll::TypedStorage<4, 4, ::LoadImportedLevelData>         mLoadLevelData;
    ::ll::TypedStorage<1, 1, bool>                            mFromTempFile;
    ::ll::TypedStorage<1, 1, bool>                            mSuppressStartMessage;
    ::ll::TypedStorage<1, 1, bool>                            mSuppressEndMessage;
    ::ll::TypedStorage<1, 1, bool>                            mSuppressImportProgressScreen;
    ::ll::TypedStorage<1, 1, bool>                            mIsEditorWorld;
    ::ll::TypedStorage<8, 24, std::string>                    mLevelId;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ImportContext>> mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    ImportLevelData& operator=(ImportLevelData const&);
    ImportLevelData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ImportLevelData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ImportLevelData {};
#endif // @header-generator platform
