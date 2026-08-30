#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/ServiceClient.h"
#include "mc/client/services/ms_graph/IGraphApi.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace MSGraph::Models { struct DownloadUrlInfo; }
namespace MSGraph::Models { struct DriveItem; }
namespace MSGraph::Models { struct DriveItemCollection; }
namespace MSGraph::Models { struct GraphError; }
namespace MSGraph::Models { struct GraphUploadBody; }
namespace MSGraph::Models { struct UploadSession; }
// clang-format on

class EduGraphService : public ::ServiceClient, public ::MSGraph::IGraphApi {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mGetAuthTokenFunctor;
    // NOLINTEND

public:
    // prevent constructor by default
    EduGraphService();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~EduGraphService();

    virtual void getItemById(std::string const&, std::function<void (Bedrock::Result<MSGraph::Models::DriveItem, MSGraph::Models::GraphError>, uint)>);

    virtual void getItemByPath(std::string const&, std::function<void (Bedrock::Result<MSGraph::Models::DriveItem, MSGraph::Models::GraphError>, uint)>);

    virtual void getDriveContentsAtPath(std::string const&, std::function<void (Bedrock::Result<MSGraph::Models::DriveItemCollection, MSGraph::Models::GraphError>)>);

    virtual void uploadNewFile(std::string, std::function<void (Bedrock::Result<MSGraph::Models::DriveItem, MSGraph::Models::GraphError>, uint)>);

    virtual void uploadExistingFile(::Core::Path, std::string, std::function<void (Bedrock::Result<MSGraph::Models::DriveItem, MSGraph::Models::GraphError>, uint)>);

    virtual void uploadFileChunk(std::shared_ptr<MSGraph::Models::GraphUploadBody>, std::string const&, uint const, ulong const, std::function<void (Bedrock::Result<MSGraph::Models::UploadSession, MSGraph::Models::GraphError>, Bedrock::Result<MSGraph::Models::DriveItem, MSGraph::Models::GraphError>, uint)>);

    virtual void getDownloadUrl(std::string const&, std::function<void (Bedrock::Result<MSGraph::Models::DownloadUrlInfo, MSGraph::Models::GraphError>, uint)>);

    virtual void deleteItemById(std::string const&, std::function<void (uint)>);

    virtual void createUploadSession(std::string const&, std::function<void (Bedrock::Result<MSGraph::Models::UploadSession, MSGraph::Models::GraphError>, const std::string&, uint)>);

    virtual void deleteUploadSession(std::string const&, std::function<void (uint)>);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EduGraphService(std::function<const std::string()>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::function<const std::string()>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $getItemById(
        std::string const&,
        std::function<void(Bedrock::Result<MSGraph::Models::DriveItem, MSGraph::Models::GraphError>, uint)>
    );

    MCNAPI void $getItemByPath(
        std::string const&,
        std::function<void(Bedrock::Result<MSGraph::Models::DriveItem, MSGraph::Models::GraphError>, uint)>
    );

    MCNAPI void $getDriveContentsAtPath(
        std::string const&,
        std::function<void(Bedrock::Result<MSGraph::Models::DriveItemCollection, MSGraph::Models::GraphError>)>
    );

    MCNAPI void $uploadNewFile(
        std::string,
        std::function<void(Bedrock::Result<MSGraph::Models::DriveItem, MSGraph::Models::GraphError>, uint)>
    );

    MCNAPI void $uploadExistingFile(
        ::Core::Path,
        std::string,
        std::function<void(Bedrock::Result<MSGraph::Models::DriveItem, MSGraph::Models::GraphError>, uint)>
    );

    MCNAPI void $uploadFileChunk(
        std::shared_ptr<MSGraph::Models::GraphUploadBody>,
        std::string const&,
        uint const,
        ulong const,
        std::function<void(
            Bedrock::Result<MSGraph::Models::UploadSession, MSGraph::Models::GraphError>,
            Bedrock::Result<MSGraph::Models::DriveItem, MSGraph::Models::GraphError>,
            uint
        )>
    );

    MCNAPI void $getDownloadUrl(
        std::string const&,
        std::function<void(Bedrock::Result<MSGraph::Models::DownloadUrlInfo, MSGraph::Models::GraphError>, uint)>
    );

    MCNAPI void $deleteItemById(std::string const&, std::function<void(uint)>);

    MCNAPI void $createUploadSession(
        std::string const&,
        std::function<void(
            Bedrock::Result<MSGraph::Models::UploadSession, MSGraph::Models::GraphError>,
            const std::string&,
            uint
        )>
    );

    MCNAPI void $deleteUploadSession(std::string const&, std::function<void(uint)>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
