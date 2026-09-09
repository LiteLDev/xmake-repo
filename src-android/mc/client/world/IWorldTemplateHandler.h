#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct LevelSummary;
struct WorldTemplateInfo;
namespace World { struct WorldID; }
// clang-format on

namespace World {

class IWorldTemplateHandler {
public:
    // IWorldTemplateHandler inner types define
    enum class Result : int {
        Success         = 0,
        MissingTemplate = 1,
        LoadingError    = 2,
    };

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
};

} // namespace World
