# alpine-fips

Alpine Linux with FIPS 140-2 OpenSSL

`alpine-fips` combines a [base Alpine image](https://hub.docker.com/_/alpine/) with [FIPS 140-2 enabled OpenSSL](https://www.openssl.org/docs/fips.html).

The `Dockerfile` builds the FIPS canister per the requirements in  "OpenSSL FIPS 140-2 Security Policy Version 2.0.16." It also verifies the SHA256 hash and PGP signatures of the OpenSSL and FIPS Module source.

This Docker image itself is not FIPS compliant. The Security Policy requires "An independently acquired FIPS 140­-2 validated implementation of SHA­1 HMAC must be used for this digest verification." The SHA1 HMAC in this image is validated by a vanilla OpenSSL installation. However, feel free to modify this `Dockerfile` for use with a FIPS module you validate with your own FIPS 140-2 implementation.

The goal of this project is to provide a convenient image to test software builds in FIPS mode.
