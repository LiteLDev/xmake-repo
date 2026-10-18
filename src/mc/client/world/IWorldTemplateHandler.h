#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
struct LevelSummary;
struct WorldTemplateInfo;
namespace World { struct WorldID; }
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated forward declare list
// clang-format off
struct LevelSummary;
struct WorldTemplateInfo;
namespace World { struct WorldID; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace World {

class IWorldTemplateHandler {
public:
    // IWorldTemplateHandler inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class Result : int {
        Success         = 0,
        MissingTemplate = 1,
        LoadingError    = 2,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class Result : int {
        Success         = 0,
        MissingTemplate = 1,
        LoadingError    = 2,
    };
#else // @header-generator platform
    enum class Result : int {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class WriteTemplateError : uchar {
        IncorrectWorldId      = 0,
        InsufficientDiskSpace = 1,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IWorldTemplateHandler() = default;

    virtual void loadTemplate(std::string const&, std::function<void (std::variant<World::WorldID, World::IWorldTemplateHandler::Result>)>) = 0;

    virtual std::optional<World::IWorldTemplateHandler::WriteTemplateError> saveTemplate(::LevelSummary const&) const = 0;

    virtual bool isTemplateExportEnabled() const = 0;

    virtual std::vector<std::unique_ptr<const WorldTemplateInfo>> const& getLocalTemplates() const = 0;
    // clang-format on
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class WriteTemplateError : uchar {
        IncorrectWorldId      = 0,
        InsufficientDiskSpace = 1,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IWorldTemplateHandler() = default;

    virtual void loadTemplate(
        ::std::string const&                                                                            templateId,
        ::std::function<void(::std::variant<::World::WorldID, ::World::IWorldTemplateHandler::Result>)> onComplete
    ) = 0;

    virtual ::std::optional<::World::IWorldTemplateHandler::WriteTemplateError>
    saveTemplate(::LevelSummary const& levelSummary) const = 0;

    virtual bool isTemplateExportEnabled() const = 0;

    virtual ::std::vector<::std::unique_ptr<::WorldTemplateInfo const>> const& getLocalTemplates() const = 0;
    // NOLINTEND
#else // @header-generator platform
    enum class WriteTemplateError : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace World
