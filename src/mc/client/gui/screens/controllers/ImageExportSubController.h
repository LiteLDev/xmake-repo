#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
namespace Core { template<typename T0, int T1> class BasicStackString; }
// clang-format on

class ImageExportSubController : public ::ClientInstanceScreenController {
public:
    // prevent constructor by default
    ImageExportSubController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ImageExportSubController();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ImageExportSubController(std::shared_ptr<ClientInstanceScreenModel>);

    MCNAPI ::ui::ViewRequest
    handleImagesExport(std::vector<Core::PathBuffer<Core::BasicStackString<char, 1024>>> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ClientInstanceScreenModel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"

class ImageExportSubController : public ::ClientInstanceScreenController {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ImageExportSubController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ui::ViewRequest
    handleImagesExport(::std::vector<::Core::PathBuffer<::Core::BasicStackString<char, 1024>>> const& toExport);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
#else // @header-generator platform
class ImageExportSubController {};
#endif // @header-generator platform
#endif // @header-generator platform
