# CSCI 330 - Simplified C++ Development Environment
# This is a minimal setup that just works!

FROM gcc:latest

# Install only the essentials students need
RUN apt-get update && apt-get install -y \
    gdb \
    make \
    valgrind \
    && rm -rf /var/lib/apt/lists/*

# Set working directory
WORKDIR /workspace

# Welcome message
RUN echo '#!/bin/bash\n\
echo "================================="\n\
echo "  CSCI 330 - C++ Environment"\n\
echo "  Ready to compile and run!"\n\
echo "================================="\n\
echo ""\n\
echo "Quick commands:"\n\
echo "  Compile: g++ -o program program.cpp"\n\
echo "  Run:     ./program"\n\
echo "  Debug:   gdb ./program"\n\
echo ""\n\
exec "$@"' > /entrypoint.sh && chmod +x /entrypoint.sh

ENTRYPOINT ["/entrypoint.sh"]
CMD ["/bin/bash"]