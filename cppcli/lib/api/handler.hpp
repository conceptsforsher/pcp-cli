#pragma once

#include "server.hpp"
#include "core/matrix_client.hpp"

namespace matrixcli { namespace api {

// Matrix-mode API handler backed by the vendored desktop core (lib/ecore).
class MatrixHandler {
public:
    explicit MatrixHandler(pcp::desktop::MatrixClient& client);

    Response handleStatus(const Request& req);
    Response handleLogin(const Request& req);
    Response handleSync(const Request& req);
    Response handleSendMessage(const Request& req);

private:
    pcp::desktop::MatrixClient& _client;
};

}} // namespace matrixcli::api
