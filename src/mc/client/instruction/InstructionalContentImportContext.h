#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/resources/DefaultImportContext.h"
#include "mc/client/resources/ImportContextType.h"
#include "mc/client/resources/ImportSuccess.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class IResourcePackRepository;
class IToastManager;
class LessonItem;
class PackManifest;
class PackReport;
class ResourcePack;
class ResourcePackManager;
class WorldTemplateManager;
namespace Core { class Path; }
// clang-format on

class InstructionalContentImportContext : public ::DefaultImportContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<LessonItem>> mItem;
    // NOLINTEND

public:
    // prevent constructor by default
    InstructionalContentImportContext();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~InstructionalContentImportContext();

    virtual ::ImportContextType getImportContextType() const;

    virtual void notifyEarlyImportStarted(bool);

    virtual void notifyImportSucceeded(::ResourcePack const*, ::ImportSuccess, ::PackManifest const&, ::PackReport const&, ::Core::Path const&);

    virtual bool modifyManifest(::PackManifest&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InstructionalContentImportContext(
        ::IResourcePackRepository&,
        ::ResourcePackManager&,
        ::IMinecraftEventing&,
        ::IToastManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<WorldTemplateManager>> const&,
        std::function<void(bool, const std::string&)>,
        std::shared_ptr<LessonItem>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::IResourcePackRepository&,
        ::ResourcePackManager&,
        ::IMinecraftEventing&,
        ::IToastManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<WorldTemplateManager>> const&,
        std::function<void(bool, const std::string&)>,
        std::shared_ptr<LessonItem>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ImportContextType $getImportContextType() const;

    MCNAPI void $notifyEarlyImportStarted(bool);

    MCNAPI void $notifyImportSucceeded(
        ::ResourcePack const*,
        ::ImportSuccess,
        ::PackManifest const&,
        ::PackReport const&,
        ::Core::Path const&
    );

    MCNAPI bool $modifyManifest(::PackManifest&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class InstructionalContentImportContext {};
#endif // @header-generator platform
