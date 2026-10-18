#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/services/catalog/content_binary/Type.h"
#include "mc/client/services/download/DlcHydrationInfo.h"
#include "mc/client/services/download/DlcId.h"
#include "mc/client/services/persona/ingest/IngestPackIdData.h"
#include "mc/client/services/persona/ingest/IngestPackIdDataCompare.h"
#include "mc/client/services/persona/ingest/IngestTracker.h"
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/ArmSizeType.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
class IContentAcquisition;
class IDlcBatchModel;
class IPersonaRepository;
class ISkinRepository;
class IStoreCatalogItem;
class IStoreCatalogRepository;
class PersonaAppearance;
namespace catalog { struct HydrationInfo; }
namespace persona { class PieceHandle; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace persona {

class IngestManager {
public:
    // IngestManager inner types declare
    // clang-format off
    struct BatchModelInitData;
    struct PieceDownloadData;
    // clang-format on

    // IngestManager inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class ProcessType : uchar {
        Omit              = 0,
        CustomSkin        = 1,
        Download          = 2,
        LoadingInProgress = 3,
    };
#else // @header-generator platform
    enum class ProcessType : schar {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct BatchModelInitData {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 24, std::set<persona::IngestPackIdData, persona::IngestPackIdDataCompare, std::allocator<persona::IngestPackIdData>>> mPackIdDataSet;
        ::ll::TypedStorage<8, 24, std::vector<DlcId>> mDownloadDlcIds;
        ::ll::TypedStorage<8, 24, std::vector<DlcId>> mLoadingDlcIds;
        // clang-format on
        // NOLINTEND
    };
#else // @header-generator platform
    struct BatchModelInitData {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct PieceDownloadData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::mce::UUID>          mProductId;
        ::ll::UntypedStorage<8, 48>                     mPackIdentity;
        ::ll::TypedStorage<1, 1, ::ContentBinary::Type> mBinaryType;
        ::ll::TypedStorage<8, 104, ::DlcHydrationInfo>  mHydrationInfo;
        ::ll::TypedStorage<8, 24, std::string>          mSkinId;
        // NOLINTEND

    public:
        // prevent constructor by default
        PieceDownloadData();
    };

    using ProcessStatusHandle = ::Bedrock::Threading::Async<bool>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                    mPersonaRepository;
    ::ll::UntypedStorage<8, 24>                                    mSkinRepository;
    ::ll::UntypedStorage<8, 24>                                    mContentAcquisition;
    ::ll::UntypedStorage<8, 24>                                    mStoreRepository;
    ::ll::TypedStorage<8, 24, std::vector<persona::IngestTracker>> mIngestTrackers;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                        mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    IngestManager();
#else // @header-generator platform
    struct PieceDownloadData {};
#endif // @header-generator platform
};

} // namespace persona
