#include "ll/core/LeviLamina.h"
#include "ll/api/io/FileUtils.h"

#include "mc/platform/UUID.h"

namespace ll {

std::string_view getServiceUuid() {
    static std::string serverUuid = [] {
        auto uuidPath = getSelfModIns()->getDataDir() / u8"statisticsUuid";
        return *file_utils::readFile(uuidPath).or_else([&] {
            std::string uuid = mce::UUID::random().asString();
            file_utils::writeFile(uuidPath, uuid);
            return std::optional{std::move(uuid)};
        });
    }();
    return serverUuid;
}

} // namespace ll
